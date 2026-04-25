# Chain Simulation

> An interactive inverse kinematics chain that follows your mouse, built with openFrameworks

![demo](images/demo.gif)

---

## What is this?

A real-time **inverse kinematics** simulation where a chain of joints follows the mouse cursor. Each link is constrained to a fixed length and pulls the rest of the chain behind it, producing a natural snake-like dragging motion.

The number of joints, link length, and link width can all be adjusted live via GUI sliders — no restart needed.

---

## How it works

The chain uses a simple **FABRIK-inspired** forward pass:

1. The **first joint** is pinned to the mouse position every frame
2. Each subsequent joint is pulled toward the previous one
3. If the distance exceeds the link length, the joint is repositioned along the direction vector at exactly that distance
4. The result is a smooth, organic trailing motion

---

## Features

- 🖱️ **Mouse tracking** — the chain head follows your cursor in real time
- 🔗 **Configurable chain** — adjust joints, length and width on the fly
- 🎛️ **Live GUI sliders** — powered by ofxGui
- ⚫ **Clean minimal visuals** — joints drawn with layered circles for depth

---

## GUI Controls

| Slider | Description |
|---|---|
| `joints size` | Number of joints in the chain (0 – 50) |
| `link length` | Distance between each joint (0 – 200px) |
| `link width` | Thickness of the links (0 – 50px) |

---

## How to build

1. Clone this repo into your `openFrameworks/apps/myApps/` folder
2. Open the `.sln` file in Visual Studio
3. Switch the build config to **Release / x64**
4. Hit `Ctrl + Shift + B`
5. Run the binary from the `bin/` folder

---

## Project structure

```
├── src/
│   ├── main.cpp
│   ├── ofApp.h / ofApp.cpp      # App entry, GUI setup
│   ├── Chain.h  / Chain.cpp     # Chain and joint logic
│   └── Utils.h                  # drawThickLine helper
└── bin/                         # Compiled output
```

---

## Dependencies

| Library | Notes |
|---|---|
| openFrameworks 0.12+ | Core framework |
| ofxGui | Bundled addon — no install needed |

---

## References

- [Procedural animation](https://www.youtube.com/watch?v=qlfh_rv6khY)