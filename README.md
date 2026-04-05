# SpinCoaterGME

Nesse repositorio encontra-se todos as informações de projeto para se construir um Spin Coater Homemade.
Um Spin Coater é um equipamento muito utilzado em laboratórios. Utilizando esse equipamento podemos
produzir filmes de varias espessuras de acordo com o procedimento experimental. Esse equipamento foi criado
no GME (Grupo de Métodos Eletroforéticos/UFG - Brasil) e sua utilização era principalmente para produção de filmes
poliméricos de PDMS, PMMA e resinas. 

Esse sistema utiliza um sistema embarcado com fimware que tem código escrito em C++ e um aplicativo para dispositivos Android que possuam bluetooth.
Foi entendido que era necessario muita praticidade e facilidade no manuseio das amostras.
Então concebemos um dispositivo de fácil utilização via bluetooth. Com isso podemos facilitar o procedimento experimental e aumentar a produtividade nesse dispositivo.


# Aplicativo

O aplicativo mobile foi desenvolvido na plataforma Mit App Inventor e utiliza a comunicação via bluetooth para troca de dados.
A interface do aplicativo tem as configurações disponiveis para realizar o procedimento experimental.
O usuário pode escrever a intensidade de rotação e o tempo de rotação em segundos.
Foi concebida também uma tela de login para que o usuário possa conectar seu dispositivo e configurar a senha
de acesso ao aplicativo.


# Senhas de acesso

Existem duas senhas padrão a serem configuradas para o funcionamento spin coater.
A senha do aplicativo mobile e módulo HC-06.
Atualmente a maneira de acessar o aplicativo com um usuário tem as seguintes etapas:
precione "Entrar" com toque longo, apos aparecer a notificação
para entrar como administrador confirme "Sim".
A senha do módulo HC-06 é configurada por padrão "1234" e é utilizada para conectar o celular ao módulo.


# SpinCoaterV3 AT-AU - Sistema Embarcado

O Sistema Embarcado do Spin Coater foi feito utilizando Eagle, está também disponível um pdf com o fotolito
para confecção da PCB. Nesse diretório encontra-se todos os arquivos para a confecção do hardware do spin coater. 
Foram deixadas disponíveis os terminais responsáveis dedicados para a gravação do código em hexadecimal (.hex) 
no microcontrolador ATmega328au.

Video de demontração:
https://youtu.be/IxnT_PpbAdY


# Firmware

O firmware foi escrito em liguagem C++ para Arduino. Para que se possa controlar a velocidade de rotação do motor
controlamos o duty cicle do sinal fornecido ao driver do motor. Dessa maneira conseguimos determinar o fornecimento 
de corrente para o motor e sua velocidade. Como o microcontrolador opera como um oscilador nessa etapa
utilizamos o dispositivo mobile para servir como timer e determinar o tempo do procedimento de rotação.


"Escolha uma pessoa que resolve os problemas com simplicidade para fazer um trabalho duro. Porque essa pessoa pode encontrar uma maneira fácil de fazê-lo."

O Sistema desenvolvido é OpenSource.
