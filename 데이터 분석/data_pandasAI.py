import pandas as pd
import numpy as np
from pandasai import PandasAI
from pandasai.llm.openai import OpenAI

df = pd.read_csv("C:\yolo5\yolov5\garbage_data.csv")
OPENAI_API_KEY = "(real api key)"
llm = OpenAI(api_token=OPENAI_API_KEY)

pandas_ai = PandasAI(llm, verbose=True)
pandas_ai.run(df, prompt='how many PET were been thrown away?')