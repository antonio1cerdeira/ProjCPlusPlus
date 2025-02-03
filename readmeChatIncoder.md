# 📌 Projeto: Leitura de Encoder com Arduino

## 📖 Descrição
Este projeto utiliza um **Arduino Uno** para ler um **encoder rotativo**, um **sensor de toque resistivo** e exibir informações num **ecrã digital**. O sistema pode ser utilizado para medir posição, rotação e força aplicada.

## 🚀 Componentes Utilizados
- 🟦 **Arduino Uno**
- 🔄 **Encoder Rotativo**
- 📟 **Ecrã Digital**
- ✋ **Sensor de Força/Toque Resistivo**
- 🔌 **Fios de Ligação**

## 🔧 Esquema de Ligação
### 🎛 Encoder Rotativo
| Encoder | Arduino |
|---------|---------|
| GND     | GND     |
| VCC     | 5V      |
| Sinal A | D2      |
| Sinal B | D3      |

### 🖐 Sensor de Toque/FSR
| Sensor  | Arduino |
|---------|---------|
| GND     | GND     |
| VCC     | 5V      |
| Sinal   | A0      |

### 📟 Ecrã Digital
| Ecrã    | Arduino |
|---------|---------|
| GND     | GND     |
| VCC     | 5V      |
| Sinal   | D6      |

![Esquema do Circuito](/img/chatInc.png)
## 📌 Como Executar
1. **Monte o circuito conforme o esquema acima**
2. **Carregue o código no Arduino**
3. **Abra o Monitor Serial (Baud Rate: 9600)**
4. **Gire o encoder e pressione o sensor para ver os valores a mudarem**

## 📜 Licença
Este projeto está sob a licença MIT - veja o ficheiro [LICENSE](LICENSE) para mais detalhes.

---
🚀 Feito com ❤️ por [Cerdeiradev]
