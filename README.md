# 🎟️ Ticket Flow

**Ticket Flow 2025** is a simple and interactive C program designed for cinema sales analytics. It features a fun and engaging way to generate and visualize random ticket sales data for top-rated movies. Whether you're learning C or want to demonstrate basic concepts in data generation and ASCII visualization, Ticket Flow is a perfect starting point.

---

## ✨ Features

- **🎲 Random Sales Data Generation**  
  Every execution creates fresh ticket sales data for a curated list of famous movies.
- **🖥️ Interactive Menu**  
  User-friendly console interface lets you navigate between viewing data, reading about the program, and exiting.
- **📊 ASCII Bar Charts**  
  Visualize ticket sales with professional-looking ASCII bar charts for instant analytics.
- **👨‍💻 Educational Value**  
  Demonstrates array manipulation, random number generation, and console UI best practices in C.

---

## 🚀 How It Works

1. **Menu Navigation**  
   On launch, you'll see a menu with three options:
   - View Random Sales Data
   - About This Program
   - Exit

2. **View Sales Data**  
   Select this to generate random sales for a list of 10 classic movies. Each movie's sales is randomly chosen (0-199 tickets).

3. **ASCII Visualization**  
   After viewing sales data, you can opt to see a bar chart where each bar (`||`) represents 10 tickets sold.

4. **About Section**  
   Learn more about the program's purpose and features.

5. **Exit**  
   Cleanly exit with a thank-you message.

---

## 🖼️ Example Output

```
=== TICKET FLOW 2025 ===
Advanced Cinema Sales Analytics

1. View Random Sales Data
2. About This Program
3. Exit

Select an option (1-3): 1

=== CINEMA SALES DATA ===

Movie: The Shawshank Redemption | Sells: 123
Movie: The Godfather           | Sells: 45
...

Do you want a Graphic of the sells? (y/n)
y

=== CINEMA SALES CHART ===

The Shawshank Redemption    |||||||||||||||| (123 tickets)
The Godfather              |||||||| (45 tickets)
...
=== Chart Complete! ===
```

---

## 🏁 How to Run

1. **Clone the repository:**
   ```sh
   git clone https://github.com/zackeenn/ticket_flow.git
   cd ticket_flow
   ```

2. **Compile the Program:**
   ```sh
   gcc -o ticket_flow ticket_flow.c
   ```

3. **Run:**
   ```sh
   ./ticket_flow
   ```

---

## 🎬 Movie List

- The Shawshank Redemption
- The Godfather
- The Dark Knight
- Pulp Fiction
- Forrest Gump
- Inception
- The Matrix
- Fight Club
- Goodfellas
- Interstellar

---

## 💡 Code Highlights

- Uses arrays for menu and movies.
- Generates pseudo-random ticket sales using `rand()`.
- Visualizes statistics with ASCII art in the terminal.
- Simple loop and switch-case for menu navigation.
- Portable and beginner-friendly C code.

---

## 📄 License

This project is open source and free to use for educational and demonstration purposes.

---

## 👤 Author

Developed by [zackeenn](https://github.com/zackeenn)
