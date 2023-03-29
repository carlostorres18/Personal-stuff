import pandas as pd
import yfinance as yf 
import streamlit as st


tickerSymbols = ['GME', 'NVDA', 'AMD','GOOGL', 'TSLA']
tickerData = []
tickerDF = []

for ticker in range(len(tickerSymbols)):
    tickerData.append(yf.Ticker(tickerSymbols[ticker]))

    tickerDF.append(tickerData[ticker].history(period='1d', start= '2010-5-31', end= '2020-5-31'))
    st.write(tickerSymbols[ticker]) #GME
    st.line_chart(tickerSymbols[ticker].Close)
    st.line_chart(tickerSymbols[ticker].Volume)


