# Relatório - Atividade 03  
**Nome:** Wellington Gomes Coutinho 
**Data:** 13/06/2025

## 1. Objetivo  
Esta atividade teve como objetivos:  
1. **Criar um ambiente isolado** usando Docker (imagem Fedora) para compilar e executar código em C.  
2. **Praticar conceitos de Sistemas Operacionais**, como gerenciamento de processos, através de um programa em C (ex: `fork()`, `getpid()`).  
3. **Documentar o processo** com um relatório técnico, incluindo:  
   - Passos para configurar o Docker.  
   - Resultados da execução do código.  
   - Análise do comportamento dos processos. ] 

## 2. Passos Executados  
- Comandos Docker usados (`docker build`, `docker run`).  
- Compilação e execução do código (`gcc`, `./programa`).  

## 3. Resultados  
### Saída do programa `main.c`:
```text
Processo pai (PID: 1789)  
Processo filho (PID: 1790)  
Processo pai finalizado.  
Processo filho finalizado. 
```
## 3. Resultados  
### Saída do programa `main.c`:
```text
Processo pai (PID: 26)
Processo filho (PID: 27)