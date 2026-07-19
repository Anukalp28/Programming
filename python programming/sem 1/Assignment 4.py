import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns

data = [12, 7, 3, 10, 8, 7, 15, 12, 9, 10]
df = pd.DataFrame(data, columns=['Values'])

# Set up the plotting area
fig, axes = plt.subplots(1, 3, figsize=(15, 5))
# fig, axes = plt.subplots(1, 3)

# Histogram
sns.histplot(df['Values'], kde=True, ax=axes[0])
axes[0].set_title('Histogram of Values')
axes[0].set_xlabel('Values')
axes[0].set_ylabel('Frequency')

# Box Plot
sns.boxplot(y=df['Values'], ax=axes[1])
axes[1].set_title('Box Plot of Values')
axes[1].set_ylabel('Values')

# Bar Chart
sns.barplot(x=df.index, y=df['Values'], ax=axes[2])
axes[2].set_title('Bar Chart of Values')
axes[2].set_xlabel('Index')
axes[2].set_ylabel('Values')

plt.tight_layout()
plt.show()
