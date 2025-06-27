Great! If your `.ino` file is inside a subfolder named `LDE`, your repo structure looks like this:

```
LDR-Light-Control/
├── LDE/
│   └── LDR_LED.ino
├── README.md
├── LICENSE
├── images/
│   └── circuit_diagram.png
```

That’s fine — just update the **README** accordingly and make it easy for others to find the `.ino` file.

---

## ✅ Updated `README.md` (reflecting `LDE/LDR_LED.ino`)

```markdown
# 🌞 LDR-Based Light Controlled LED using Arduino Mega 2560

[![Platform](https://img.shields.io/badge/platform-Arduino-blue.svg)](https://www.arduino.cc/)
[![License](https://img.shields.io/badge/license-MIT-green.svg)](LICENSE)

This project uses a Light Dependent Resistor (LDR) to measure ambient light and control an LED accordingly using an Arduino Mega 2560. It turns the LED **ON in darkness** and **OFF in light** automatically.

---

## 🔧 Components Required

| Component         | Quantity |
|------------------|----------|
| Arduino Mega 2560 | 1        |
| LDR (Light Sensor)| 1        |
| 10kΩ Resistor     | 1        |
| LED               | 1 (optional, can use built-in) |
| 330Ω Resistor     | 1        |
| Breadboard + Jumper Wires | As needed |

---

## 🔌 Circuit Diagram

![Circuit Diagram](images/circuit_diagram.png)

**Voltage Divider Setup:**

```

5V --- LDR --- A0 --- 10kΩ --- GND

````

*LED connected to digital pin 13 (or use built-in LED).*

---

## 💡 How It Works

- The **LDR** changes resistance with light.
- Arduino reads analog value from **A0**.
- If value < threshold (dark): **LED turns ON**.
- If value > threshold (bright): **LED turns OFF**.

---

## 📁 Project Structure

```bash
LDR-Light-Control/
├── LDE/
│   └── LDR_LED.ino      # Main Arduino sketch
├── images/
│   └── circuit_diagram.png
├── README.md
├── LICENSE
````

---

## 🚀 Getting Started

1. Clone this repository:

   ```bash
   git clone https://github.com/your-username/LDR-Light-Control.git
   cd LDR-Light-Control/LDE
   ```

2. Open `LDR_LED.ino` in **Arduino IDE**.

3. Select **Arduino Mega 2560**, choose the correct port, and upload the code.

4. Open Serial Monitor to view real-time LDR values and LED status.

---

## 📟 Sample Output

```txt
LDR Value: 4
LED ON
LDR Value: 800
LED OFF
```

---

## 📜 License

This project is licensed under the MIT License – see the [LICENSE](LICENSE) file for details.

---

## 🙌 Credits

Created by [Your Name](https://github.com/your-username)
Feel free to fork, contribute, and improve this beginner-friendly IoT Arduino project!

```

---

Once you push this updated structure, let me know — I’ll help review and add:
- Shields.io badges
- GitHub topics
- Release tags (optional)
- Project cover image/banner if needed

Would you like me to generate a banner image for your GitHub repo too?
```
