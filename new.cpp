// Day 1: Includes and Tick Struct
#include <iostream>
#include <string>
#include <chrono>
#include <iomanip>
#include <sstream>
#include <vector>
#include <map>
using namespace std;

struct Tick {
    string symbol;
    int quantity;
    double price;
    string eventType;
    string timestamp;
};

string getCurrentTimestamp() {
    auto now = chrono::system_clock::now();
    auto ms = chrono::duration_cast<chrono::milliseconds>(now.time_since_epoch()) % 1000;
    time_t t = chrono::system_clock::to_time_t(now);
    tm* ptm = localtime(&t);

    stringstream ss;
    ss << put_time(ptm, "%H:%M:%S") << "." << setfill('0') << setw(3) << ms.count();
    return ss.str();
}

int main() {
    // Day 2: Input and Storage
    int n;
    cout << "Enter number of ticks: ";
    cin >> n;

    vector<Tick> ticks;

    for (int i = 0; i < n; ++i) {
        Tick t;
        cout << "Enter symbol: ";
        cin >> t.symbol;

        cout << "Enter quantity: ";
        cin >> t.quantity;

        cout << "Enter price: ";
        cin >> t.price;

        cout << "Enter event type (ORDER/TRADE/CANCEL): ";
        cin >> t.eventType;

        t.timestamp = getCurrentTimestamp(); // live time
        ticks.push_back(t);
    }

    // Day 2: Display All Ticks
    cout << "\nStored Tick Data:\n";
    for (const Tick& t : ticks) {
        cout << "Symbol: " << t.symbol
             << ", Quantity: " << t.quantity
             << ", Price: " << t.price
             << ", Event: " << t.eventType
             << ", Time: " << t.timestamp << endl;
    }

    // Day 3: Filter by Symbol
    string querySymbol;
    cout << "\nEnter symbol to filter: ";
    cin >> querySymbol;

    cout << "\nFiltered Ticks for symbol '" << querySymbol << "':\n";
    for (const Tick& t : ticks) {
        if (t.symbol == querySymbol) {
            cout << "Symbol: " << t.symbol
                 << ", Quantity: " << t.quantity
                 << ", Price: " << t.price
                 << ", Event: " << t.eventType
                 << ", Time: " << t.timestamp << endl;
        }
    }

    // Day 4: Filter by Event Type
    string queryEvent;
    cout << "\nEnter event type to filter (ORDER/TRADE/CANCEL): ";
    cin >> queryEvent;

    cout << "\nFiltered Ticks for event type '" << queryEvent << "':\n";
    for (const Tick& t : ticks) {
        if (t.eventType == queryEvent) {
            cout << "Symbol: " << t.symbol
                 << ", Quantity: " << t.quantity
                 << ", Price: " << t.price
                 << ", Event: " << t.eventType
                 << ", Time: " << t.timestamp << endl;
        }
    }

    // Day 5: Event Summary
    int orderCount = 0, tradeCount = 0, cancelCount = 0;

    for (const Tick& t : ticks) {
        if (t.eventType == "ORDER") orderCount++;
        else if (t.eventType == "TRADE") tradeCount++;
        else if (t.eventType == "CANCEL") cancelCount++;
    }

    cout << "\nEvent Summary:\n";
    cout << "Total ORDER events: " << orderCount << endl;
    cout << "Total TRADE events: " << tradeCount << endl;
    cout << "Total CANCEL events: " << cancelCount << endl;

    // Day 6: Highest TRADE per Symbol
    map<string, Tick> highestTrade;

    for (const Tick& t : ticks) {
        if (t.eventType == "TRADE") {
            if (highestTrade.find(t.symbol) == highestTrade.end() || t.price > highestTrade[t.symbol].price) {
                highestTrade[t.symbol] = t;
            }
        }
    }

    cout << "\nHighest Price TRADE per Symbol:\n";
    for (const auto& pair : highestTrade) {
        const Tick& t = pair.second;
        cout << "Symbol: " << t.symbol
             << ", Price: " << t.price
             << ", Quantity: " << t.quantity
             << ", Time: " << t.timestamp << endl;
    }

    // Day 7: Latest Tick per Symbol
    map<string, Tick> latestTick;

    for (const Tick& t : ticks) {
        if (latestTick.find(t.symbol) == latestTick.end() || t.timestamp > latestTick[t.symbol].timestamp) {
            latestTick[t.symbol] = t;
        }
    }

    cout << "\nLatest Tick per Symbol:\n";
    for (const auto& pair : latestTick) {
        const Tick& t = pair.second;
        cout << "Symbol: " << t.symbol
             << ", Event: " << t.eventType
             << ", Price: " << t.price
             << ", Quantity: " << t.quantity
             << ", Time: " << t.timestamp << endl;
    }

    return 0;
}
