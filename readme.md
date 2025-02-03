![Esquema do Circuito](img/TesteForca.png)

# 📟 Sensor de Força (FSR) com Arduino

Este projeto tem como objetivo demonstrar o uso de um **Sensor de Força (FSR)** com um **Arduino Uno** para medir a força aplicada sobre o sensor e exibir os valores correspondentes.

## 📌 Descrição do Projeto

O sensor de força (FSR) altera a sua resistência conforme a força aplicada. Esse comportamento permite medições aproximadas de pressão, tornando-o útil para aplicações como controlo de toque, medição de peso e deteção de interações físicas.

Neste projeto, o **Arduino Uno** recebe a leitura do sensor via uma entrada analógica e exibe os dados num monitor serial. Dependendo do valor lido, diferentes níveis de pressão são classificados e exibidos.

## 🛠 Componentes Utilizados

- **Arduino Uno**
- **Sensor de Força Resistivo (FSR)**
- **Resistência de 10kΩ** (para pull-down)
- **Jumpers para ligação**
- **Cabo USB para alimentação do Arduino**

## 🔌 Esquema de Ligação

O sensor FSR está ligado de forma que a sua resistência variável cria uma divisão de tensão, permitindo a leitura pelo Arduino:

- Um terminal do FSR ligado ao **5V** do Arduino. 
- O outro terminal ligado ao **pino analógico A0** e ao **resistor de 10kΩ**, que por sua vez está ligado ao **GND**.

## 📊 Funcionamento

1. O **FSR** muda a sua resistência conforme a pressão aplicada.
2. O Arduino lê essa variação de resistência como um sinal analógico no pino **A0**.
3. Os valores lidos são exibidos no monitor serial, permitindo interpretar a intensidade da pressão.
4. O sistema classifica os valores de pressão em diferentes categorias, como "Sem pressão", "Toque leve" e "Aperto forte".

