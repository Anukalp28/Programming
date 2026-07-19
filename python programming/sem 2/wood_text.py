# import sys
# import ascii_magic

# def main():
#     if len(sys.argv) < 2:
#         print("Usage: python script.py <path_to_image>")
#         sys.exit(1)
        
#     image_path = sys.argv[1]

#     try:
#         # 1. Initialize the AsciiArt object using the new library structure
#         my_art = ascii_magic.AsciiArt.from_image(image_path)
        
#         # 2. Convert it using a custom character ramp that mimics wood density
#         # - columns: Sets width resolution
#         # - char: String ordered from dark/empty space to solid wood texture
#         # - monochrome: Disables full RGB terminal colors to keep the raw text look
#         wood_text = my_art.to_ascii(
#             columns=100, 
#             char=" ░▒▓█", 
#             monochrome=True
#         )
        
#         # 3. Print the wood graphic directly to the terminal
#         print(wood_text)
        
#     except FileNotFoundError:
#         print(f"Error: The file '{image_path}' could not be found.")
#     except Exception as e:
#         print(f"An error occurred: {e}")

# if __name__ == "__main__":
#     main()


# import sys
# import ascii_magic

# def main():
#     if len(sys.argv) < 2:
#         print("Usage: python script.py <path_to_image>")
#         sys.exit(1)
        
#     image_path = sys.argv[1]

#     try:
#         # Load the image using the new library structure
#         my_art = ascii_magic.AsciiArt.from_image(image_path)
        
#         # Define symbols ordered by visual density from empty to solid/darkest:
#         # space -> . -> ! -> * -> # -> % -> @ -> $
#         symbol_ramp = " .!*#%@$"
        
#         # Convert the image into text using the custom symbols
#         wood_text = my_art.to_ascii(
#             columns=140, 
#             char=symbol_ramp, 
#             monochrome=True
#         )
        
#         # Print the text directly to the terminal
#         print(wood_text)
        
#     except FileNotFoundError:
#         print(f"Error: The file '{image_path}' could not be found.")
#     except Exception as e:
#         print(f"An error occurred: {e}")

# if __name__ == "__main__":
#     main()

# import sys
# import shutil
# from PIL import Image, ImageEnhance
# import ascii_magic

# def main():
#     if len(sys.argv) < 2:
#         print("Usage: python script.py <path_to_image>")
#         sys.exit(1)
        
#     image_path = sys.argv[1]

#     try:
#         # 1. Open image and boost contrast/sharpness so details pop in text form
#         img = Image.open(image_path)
#         img = ImageEnhance.Contrast(img).enhance(1.5)  # Make highlights brighter, shadows darker
#         img = ImageEnhance.Sharpness(img).enhance(2.0) # Sharpen edges so symbols form clean outlines
        
#         # 2. Get terminal width and scale dynamically
#         terminal_width = shutil.get_terminal_size().columns
#         columns_to_use = max(40, terminal_width - 2)

#         # 3. Load the enhanced image into ascii_magic
#         my_art = ascii_magic.AsciiArt.from_pillow_image(img)
        
#         # 4. Corrected High-Detail Ramp for DARK Terminal Backgrounds
#         # (Ordered from empty/light space to heavy dark characters)
#         perfect_ramp = " .'`^ \",:;Il!i><~+_-?][}{1)(|\\/tfjrxnuvczXYUJCLQ0OZmwqpdbkhao*#MW&8%B@$"
        
#         # 5. Generate clean text art
#         wood_text = my_art.to_ascii(
#             columns=columns_to_use, 
#             char=perfect_ramp, 
#             monochrome=True
#         )
        
#         print(wood_text)
        
#     except FileNotFoundError:
#         print(f"Error: The file '{image_path}' could not be found.")
#     except Exception as e:
#         print(f"An error occurred: {e}")

# if __name__ == "__main__":
#     main()

import sys
from PIL import Image, ImageEnhance
import ascii_magic

def main():
    # 1. Properly check and extract the single string path from sys.argv
    if len(sys.argv) < 2:
        print("Usage: python script.py <path_to_image>")
        sys.exit(1)
        
    # FIX: Get the first argument from the list (the actual file path string)
    image_path = sys.argv[1]

    try:
        # 2. Open image and apply moderate contrast so shapes stay distinct
        img = Image.open(image_path)
        img = ImageEnhance.Contrast(img).enhance(1.3)
        
        # 3. Set a balanced, fixed width for standard terminal reading
        columns_to_use = 150

        # 4. Load the pre-processed image
        my_art = ascii_magic.AsciiArt.from_pillow_image(img)
        
        # 5. Moderate 12-character ramp optimized for dark backgrounds
        moderate_ramp = " .:-=+*#%@$"
        
        # 6. Generate the readable text art
        wood_text = my_art.to_ascii(
            columns=columns_to_use, 
            char=moderate_ramp, 
            monochrome=True
        )
        
        print(wood_text)
        
    except FileNotFoundError:
        print(f"Error: The file '{image_path}' could not be found.")
    except Exception as e:
        print(f"An error occurred: {e}")

if __name__ == "__main__":
    main()


