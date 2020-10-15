# This python file is used to automate the process of downloading a csv file using a URL and storing it in our system.
# The URL used in this project is from covid-19 India website. THe report generated will contain the latest data of cases in Indian states.
import pandas as pd
df = pd.read_csv("https://api.covid19india.org/csv/latest/state_wise.csv")
print(df.loc[:,'State':'Active'])
df = df.loc[:,'State':'Active']
df = df[df.State != 'State Unassigned']
print(df)
df.to_csv("covid19.csv")		


