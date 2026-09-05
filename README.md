<div align="center">

# 🚀 Galactic Defender

**A fast-paced Space Invaders-style arcade game built in C++ with Raylib**

![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Raylib](https://img.shields.io/badge/Raylib-000000?style=for-the-badge&logo=raylib&logoColor=white)
![Platform](https://img.shields.io/badge/Platform-Windows-blue?style=for-the-badge)
![License](https://img.shields.io/badge/License-Open%20Source-green?style=for-the-badge)

*Defend the galaxy. Beat your high score. Survive all three levels.*

</div>

---

## 📖 About

Galactic Defender is a classic arcade shooter built from scratch in **C++ using the Raylib library**. Waves of alien ships descend on your position — your job is to take them all down before they reach you. Each level ramps up the speed and difficulty, keeping the pressure on right until the last moment.

This was built as a learning project to explore game loops, collision detection, texture/audio management, and gameplay balancing in C++.

---

## 🎮 Gameplay Features

| Feature | Description |
|---|---|
| 🛸 Classic Invaders | Shoot down waves of alien ships across multiple rows |
| 🏆 High Score System | Best score is persisted and displayed between sessions |
| 📈 3 Progressive Levels | Each level unlocks faster, more aggressive enemies |
| ⚡ Dynamic Speed Scaling | Enemy and projectile speed increases with every level |
| 🎨 Custom Assets | Original textures and sound effects |

---

## 🛠️ Built With

- **[C++](https://isocpp.org/)** — Core game logic and architecture
- **[Raylib](https://www.raylib.com/)** — Cross-platform game programming library for rendering, input, audio, and more

---

## 📦 Getting Started

### Prerequisites

- A C++ compiler (g++, MSVC, or Clang)
- [Raylib](https://www.raylib.com/index.html) installed on your machine

### Installation

```bash
# 1. Clone the repository
git clone https://github.com/meryem-cmd/galactic-defender-raylib.git

# 2. Navigate into the project folder
cd galactic-defender-raylib
```

### Compiling & Running

**Windows (MinGW/g++)**
```bash
g++ -o galactic_defender main.cpp -lraylib -lopengl32 -lgdi32 -lwinmm
./galactic_defender
```

**Linux**
```bash
g++ -o galactic_defender main.cpp -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
./galactic_defender
```

> ⚠️ Make sure Raylib is properly linked for your OS. See the [Raylib wiki](https://github.com/raysan5/raylib/wiki) for platform-specific setup guides.

---

## 📁 Project Structure

```
galactic-defender-raylib/
├── Project6/          # Main source files
│   └── main.cpp       # Core game logic
├── x64/Debug/         # Build output
├── .vs/Project6/      # Visual Studio config
├── Project6.sln       # Visual Studio solution file
└── README.md
```

---

## 🙋‍♀️ Author

**Maryyam Tanveer**
- GitHub: [@meryem-cmd](https://github.com/meryem-cmd)

---

## 📜 License

This project is open-source and free to use, modify, or build upon. If you learn from it or use it as a reference, a ⭐ star is always appreciated!

---

## 🌟 Acknowledgements

- [Raylib](https://www.raylib.com/) — for making game development in C++ approachable and fun
- The open-source community for classic Space Invaders tutorials and inspiration

---

## 📸 Screenshots
<img width="799" height="822" alt="image" src="https://github.com/user-attachments/assets/c6fb8f06-6726-4b84-914e-5d1cdf8a69c1" />
<img width="783" height="804" alt="image" src="https://github.com/user-attachments/assets/019539fa-1a95-4a8b-925c-beb12ea665c6" />



---

## 🛠️ Built With

- **C++**
- [Raylib](https://www.raylib.com/) — A simple and easy-to-use library to enjoy videogames programming.

---

## 📦 How to Run

1. Install [Raylib](https://www.raylib.com/)
2. Clone this repository:
 
   git clone https://github.com/meryem-cmd/galactic-defender-raylib.git
Navigate to the project folder:
cd galactic-defender-raylib
3.Compile the project using your C++ compiler with Raylib linked. Example (for Windows):
g++ -o galactic_defender main.cpp -lraylib -lopengl32 -lgdi32 -lwinmm
./galactic_defender


📌 Project Inspiration
This project is based on a classic C++ Space Invaders game, enhanced with custom features like:

High score tracking

Three progressively difficult levels

Dynamic speed adjustment per level

Built to learn and experiment with game loops, collision detection, asset management, and gameplay balancing in C++ using Raylib.

👩‍💻 Author
Maryyam Tanveer
GitHub Profile

📜 License
This project is open-source and available for anyone to learn from, modify, or improve.

🌟 Acknowledgements
Raylib documentation and examples

The open-source community for classic C++ Space Invaders tutorials
