# 📊 Trade Signal Generator CLI
A modular C++ tool to generate Buy/Sell signals from market price data using strategy logic.

## 🚀 Features
- ✅ Parse time-series price feed
- 📈 Apply technical strategies (e.g., Moving Average Crossover)
- 🔔 Generate Buy/Sell signals
- 📊 Report signal accuracy and stats
- 🧱 Modular design for easy strategy extension

## 🧩 Modules Overview

| Module | Role |
|--------|------|
| `PriceFeedParser` | Parses timestamped price data |
| `StrategyEngine` | Applies trading logic (e.g., MA crossover) |
| `SignalGenerator` | Generates actionable Buy/Sell signals |
| `SignalMetrics` | Calculates accuracy, win ratio, etc. |
| `CLIOutput` | Displays results in dry-run style |

## 📂 Folder Structure
TradeSignalGenerator/

├── main.cpp

├── price_parser.h

├── price_parser.cpp

├── strategy_engine.h

├── strategy_engine.cpp

├── signal_generator.h

├── signal_generator.cpp

├── metrics.h

├── metrics.cpp

├── sample_feed.txt

├── README.md ✅



## 📥 Input Format

2025-10-05 14:15:00, 150.25

2025-10-05 14:16:00, 151.00 

...
## 📤 Sample Output

[BUY] 2025-10-05 14:16:00 @ ₹151.00

[SELL] 2025-10-05 14:45:00 @ ₹153.50

Total Signals: 12 

Accuracy: 75% 

Win Ratio: 3:1

## 🛠️ How to Run

```bash
g++ main.cpp price_parser.cpp strategy_engine.cpp signal_generator.cpp metrics.cpp -o signalgen
./signalgen < price_feed.txt

---

### 8. **Strategy Logic**
```md
## 📚 Strategy Logic (Default)

**Moving Average Crossover:**
- Short MA > Long MA → BUY
- Short MA < Long MA → SELL

You can plug in your own strategy by editing `StrategyEngine`.

## 🧠 Why This Project?

- Learn modular design in C++
- Build real-world signal logic
- Showcase strategy thinking + CLI polish
- Perfect for resume, LinkedIn, and mentor demos

## 🧱 Built With

- C++ STL (vectors, structs, string parsing)
- Dry-run mindset for debugging and clarity
- Hinglish-style modular breakdowns 😉

## 🙌 Author

**Saksham Verma**  
Modular builder | Signal thinker | Strategy explorer  
Connect on [LinkedIn](https://www.linkedin.com/in/saksham-verma-302271285/) | Showcase your streaks 💥

## 📌 Future Plans

- Add support for multiple strategies
- Real-time feed integration
- Signal backtesting module
