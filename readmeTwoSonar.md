# 📡 Circuito com Arduino Uno e Sensores HC-SR04

Este circuito utiliza um **Arduino Uno** e dois sensores **HC-SR04** para medir distâncias através de ultrassons.
![Esquema do Circuito](/img/twoSensor.png)
## 🛠 **Componentes Utilizados**
- **Arduino Uno**
- **2 Sensores HC-SR04**
- **Fios jumper**

## 🔌 **Ligações Elétricas**
Cada sensor **HC-SR04** tem quatro pinos: **VCC, GND, TRIG e ECHO**.

### **1️⃣ Alimentação:**
- O **pino VCC** de ambos os sensores está ligado ao **5V** do Arduino.
- O **pino GND** de ambos os sensores está ligado ao **GND** do Arduino.

### **2️⃣ Pinos de Controlo:**
- **Sensor 1**:
  - **TRIG** → **Pino D7** do Arduino
  - **ECHO** → **Pino D6** do Arduino
- **Sensor 2**:
  - **TRIG** → **Pino D5** do Arduino
  - **ECHO** → **Pino D4** do Arduino

## ⚙ **Funcionamento**
1. O Arduino envia um pulso **HIGH** para o **TRIG** do sensor.
2. O sensor emite uma onda ultrassónica, que reflete num objeto e retorna ao sensor.
3. O **ECHO** recebe o sinal refletido e retorna um pulso proporcional à distância do objeto.
4. O Arduino calcula a distância com base no tempo de retorno do som.

---

🚀 **Agora o teu Arduino pode medir distâncias utilizando dois sensores HC-SR04!**  
