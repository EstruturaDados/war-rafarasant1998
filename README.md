# Projeto WAR Estruturado – Nível Novato

Este projeto implementa um sistema simples de cadastro de territórios inspirado no jogo WAR, utilizando linguagem C.

## 🎮 Nível Escolhido: **Novato**

O nível **Novato** define regras básicas para introduzir o aluno à lógica de programação, structs e entrada de dados.

### 🔹 Regras do Nível Novato

1. Criar uma `struct` chamada **Territorio** contendo:
   - `char nome[30]`
   - `char cor[10]`
   - `int tropas`

2. Permitir o cadastro de **5 territórios** inseridos pelo usuário.

3. Solicitar para cada território:
   - Nome  
   - Cor do exército  
   - Quantidade de tropas

4. Utilizar um **laço** (`for`) para preencher os dados dos cinco territórios.

5. Ao final do cadastro, **exibir todas as informações** registradas no terminal, de forma clara e organizada.

---

## ▶️ Como Compilar o Programa

No terminal:

```bash
gcc war.c -o programa
```

---

## ▶️ Como Executar

```bash
./programa
```

Ou no Windows:

```bash
programa.exe
```

## 📁 Estrutura do Projeto

```
war.c
README.md
```

---