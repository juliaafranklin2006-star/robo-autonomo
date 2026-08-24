# Robô autônomo

<p align="left">
  <img src="https://img.shields.io/badge/ESP32-ff8ec7?style=for-the-badge&logo=espressif&logoColor=white">
  <img src="https://img.shields.io/badge/PlatformIO-f8b4d9?style=for-the-badge">
  <img src="https://img.shields.io/badge/C++-ffc4df?style=for-the-badge">
  <img src="https://img.shields.io/badge/Robotics-fad1e8?style=for-the-badge">
</p>

---

#  Sobre este repositório

Este repositório reúne o desenvolvimento da parte em que estou trabalhando no projeto de um robô autônomo para navegação em labirintos.

O objetivo é documentar a evolução do firmware, registrar testes realizados durante o desenvolvimento e manter organizada a documentação eletrônica produzida por mim ao longo do projeto.

> **Observação:** este repositório **não representa o projeto completo do robô**, apenas a parte sob minha responsabilidade dentro da equipe.

---

#  O que você encontrará aqui

- 🤖 Desenvolvimento do firmware em ESP32
- 📡 Testes individuais dos sensores
- ⚙️ Testes dos motores e da ponte H
- 📐 Esquemático eletrônico
- 📚 Organização modular do código
- 📝 Documentação do desenvolvimento

---

# 📂 Estrutura do repositório

```text
.
├── firmware/
│   ├── src/
│   ├── include/
│   └── platformio.ini
│
├── hardware/
│   └── Robot_Schematic.pdf
│
└── README.md
```

---

#  Firmware

A pasta **firmware** contém os códigos desenvolvidos durante o projeto.

Ela inclui tanto os módulos utilizados na implementação do robô quanto programas utilizados para validação e testes individuais dos componentes eletrônicos.

O projeto utiliza:

- ESP32
- PlatformIO
- Framework Arduino
- Linguagem C++

---

#  Hardware

A pasta **hardware** reúne a documentação eletrônica produzida durante o desenvolvimento, incluindo o esquemático do circuito e futuras revisões do hardware.

---

# 🧩 Componentes utilizados

- ESP32 DevKit
- 3 × Sensores ultrassônicos HC-SR04
- Ponte H dupla
- 2 × Motores DC
- Pack de baterias Li-Ion

---

#  Objetivos deste repositório

- Organizar o desenvolvimento da minha parte no projeto
- Documentar decisões de hardware
- Registrar testes realizados
- Facilitar futuras manutenções
- Servir como portfólio acadêmico do desenvolvimento realizado

---

#  Status

🚧 Projeto em desenvolvimento.

Este repositório é atualizado conforme novas funcionalidades, testes e documentação são produzidos.

---

