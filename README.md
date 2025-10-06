# 🧠 Mini Tick Database Simulator

A beginner-friendly C++ project that simulates how exchanges store and analyze market data in real time. This system captures ticks with timestamp, filters by symbol and event type, and generates summaries — just like real infra-grade systems.

---

## 📌 Project Overview

This project is inspired by real-world trading infrastructure. It mimics a **tick database** — a system that stores every market event like orders, trades, and cancellations. Each tick includes:

- Symbol (e.g., TCS, INFY)
- Quantity
- Price
- Event Type (ORDER / TRADE / CANCEL)
- Timestamp (formatted to milliseconds)

---

## 📅 Day-wise Breakdown

| Day | Module | Description |
|-----|--------|-------------|
| Day 1 | Tick Struct + Timestamp | Tick data structure with formatted time |
| Day 2 | Input + Storage | User se tick input lena and vector mein store karna |
| Day 3 | Filter by Symbol | Specific symbol ke ticks dikhana |
| Day 4 | Filter by Event Type | ORDER / TRADE / CANCEL ke hisaab se filter karna |
| Day 5 | Event Summary | Total ORDER, TRADE, CANCEL count |
| Day 6 | Highest Trade per Symbol | Har symbol ka highest price trade dikhana |
| Day 7 | Latest Tick per Symbol | Har symbol ka latest tick timestamp ke basis pe dikhana |

---

## 🧪 Sample Tick Format

Symbol: TCS 
Quantity: 100 
Price: 3200.50 
Event: TRADE 
Time: 14:23:56.123


---

## 🧠 Real-World Mapping

| Feature | Real Exchange Role |
|---------|---------------------|
| Tick Struct | Market data feed snapshot |
| Timestamp | Audit trail + latency tracking |
| Filtering | Analytics + dashboards |
| Summary | Risk engine + reporting |
| Latest Tick | Live feed monitoring |

---

## 🚀 How to Run

1. Compile the code using any C++17 compatible compiler  
2. Run the executable  
3. Enter tick data as prompted  
4. Use filters and view summaries

---

## 🤖 Built with AI Mentorship

This project was built with guidance from Microsoft Copilot — logic validation, timestamp formatting, and modular breakdown were done collaboratively. Code is beginner-friendly and mapped to real-world infra.

---

## 🧠 Why This Project Matters

- Helps understand how exchanges store and analyze live data  
- Shows modular thinking and timestamp literacy  
- Perfect for showcasing infra-grade builder mindset  
- Recruiter-ready and easy to explain in interviews

---

## 🙋‍♂️ About Me

Built by [Saksham Verma](https://www.linkedin.com/in/saksham-verma-302271285/)   
Focused on modular C++ projects, timestamp precision, and real-world trading simulations.

