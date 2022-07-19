#pragma once

#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <stdlib.h>

#define endl puts("\n")
#define screenCls printf("\033c")

// Estrutura dos dados dos pacientes.
typedef struct pessoaInfo
{
    int cpf;
    int idade;
    int telefone;
    int numResidencia;

    char * nome;
    char * email;
    char * estado;
    char * bairro;
    char * cidade;
    char * endereco;
    char dataNascimento[11];    // Data de nascimento da pessoa: 00/00/0000
} PessoaInfo;

int menu();                                     // Menu do sistema.
int isValidFormatEmail(char * email);           // Validado de email.

void showLogo(char * enterpriseName);           // Mostra a logo.
void repeatChar(char character, int times);     // Imprimi na tela um unico caractere.

#endif