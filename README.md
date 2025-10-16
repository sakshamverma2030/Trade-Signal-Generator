#  Mini Tick Database Simulator

A beginner-friendly C++ project that simulates how exchanges store and analyze market data in real time. This system captures ticks with timestamps, filters by symbol and event type, and generates summaries — just like real infra-grade systems.

---

##  Project Overview

This project is inspired by real-world trading infrastructure. It mimics a **tick database** — a system that stores every market event like orders, trades, and cancellations. Each tick includes:

- Symbol (e.g., TCS, INFY)
- Quantity
- Price
- Event Type (ORDER / TRADE / CANCEL)
- Timestamp (formatted to milliseconds)

---

##  Key Features

- **Tick Capture**: Stores each market event with symbol, price, quantity, type, and timestamp  
- **Filtering**: View ticks by symbol or by event type (ORDER / TRADE / CANCEL)  
- **Event Summary**: Shows total count of each event type  
- **Highest Trade Tracker**: Displays highest price trade for each symbol  
- **Latest Tick Tracker**: Tracks the most recent tick per symbol based on timestamp — simulating live feed freshness

---


##  Sample Tick Format

Symbol: TCS 

Quantity: 

100 Price: 3200.50 

Event: TRADE 

Time: 14:23:56.123


---

##  Real-World Mapping

| Feature | Real Exchange Role |
|---------|---------------------|
| Tick Struct | Market data feed snapshot |
| Timestamp | Audit trail + latency tracking |
| Filtering | Analytics + dashboards |
| Summary | Risk engine + reporting |
| Latest Tick | Live feed monitoring |

---

##  How to Run

1. Compile the code using any C++17 compatible compiler  
2. Run the executable  
3. Enter tick data as prompted  
4. Use filters and view summaries

---

##  Built with AI Mentorship

I used Microsoft Copilot as a mentor — not a coder. It helped me validate logic, structure modules clearly, and simulate real-world scenarios. I never followed anything blindly. Every suggestion was reviewed, modified, and tested. The final code is fully mine and beginner-friendly, inspired by actual trading infrastructure.

---

##  Why This Project Matters

- Helps understand how exchanges store and analyze live data  
- Shows modular thinking and timestamp literacy  
- Perfect for showcasing infra-grade builder mindset  
- Recruiter-ready and easy to explain in interviews

---

##  About Me

Built by [Saksham Verma](https://www.linkedin.com/in/saksham-verma-302271285/)  
Focused on modular C++ projects, timestamp precision, and real-world trading simulations.


