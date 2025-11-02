import pandas as pd
# Create a sample DataFrame
data = {'A': [1, 2, 3], 'B': [4, 5, 6], 'C': [7, 8, 9]}
df = pd.DataFrame(data)

# Apply some methods on the DataFrame
df['D'] = df['A'] + df['B']  # Add a new column
df = df.rename(columns={'A': 'Alpha', 'B': 'Beta'})  # Rename columns
df = df.drop(columns=['C'])  # Drop a column
df = df.sort_values(by='Alpha')  # Sort by a column
df = df.reset_index(drop=True)  # Reset the index

print(df)