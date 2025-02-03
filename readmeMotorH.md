# Controlo de Motor DC com Ponte H (L293D) e Arduino

## Descrição
Este projeto utiliza um **Arduino Uno** e um **driver de motor L293D (Ponte H)** para controlar a direção e a velocidade de um **motor DC**. Um **potenciómetro** é usado para ajustar a velocidade do motor, enquanto uma fonte de **4 pilhas AA (6V)** fornece energia ao motor.

## Componentes Necessários
- 1 x **Arduino Uno**
- 1 x **Ponte H (L293D)**
- 1 x **Motor DC**
- 1 x **Potenciómetro**
- 1 x **Suporte para 4 pilhas AA (6V)**
- Jumpers e protoboard
![Esquema do Circuito](/img/ponteH.png)
## Circuito e Ligações
### **Pinos do L293D**
- **VCC1** (pino 16) → 5V do Arduino
- **VCC2** (pino 8) → 6V da fonte de pilhas (alimenta o motor)
- **GND** (pinos 4, 5, 12, 13) → GND do Arduino e da fonte
- **IN1 e IN2** → Pinos digitais do Arduino (definem a direção do motor)
- **OUT1 e OUT2** → Conectados aos terminais do motor DC
- **EN1** → Conectado a um pino PWM do Arduino para controlo de velocidade

### **Potenciómetro**
- **Pino do meio** → Entrada analógica do Arduino (exemplo: A0)
- **Lado esquerdo** → 5V do Arduino
- **Lado direito** → GND do Arduino

## Funcionamento
1. O **potenciómetro** ajusta a velocidade do motor variando o sinal **PWM** no pino **ENA**.
2. Os pinos **IN1** e **IN2** determinam a direção do motor.
   - `IN1 = HIGH`, `IN2 = LOW` → Motor gira num sentido.
   - `IN1 = LOW`, `IN2 = HIGH` → Motor gira no sentido oposto.
   - Ambos `LOW` → Motor para.
3. O motor é alimentado por uma fonte **externa de 6V** (4 pilhas AA).

## Aplicações
- **Robótica e automação**
- **Carrinhos controlados por Arduino**
- **Controlo de motores DC em projetos DIY**