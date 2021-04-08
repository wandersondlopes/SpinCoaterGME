# SpinCoaterGME

Nesse repositorio encontra-se todos as informações de projeto para se construir um Spin Coater Homemade.
Um Spin Coater é um equipamento muito utilzado em laboratórios. Utilizando esse equipamento podemos
produzir filmes de varias espessuras de acordo com o procedimento experimental. Esse equipamento foi criado
no GME (Grupo de Métodos Eletroforéticos/UFG - Brasil) e sua utilização era principalmente para produção de filmes
polimericos de PDMS, PMMA e resinas. 

Esse sistema utiliza um sistema embarcado em um spinner e um smartphone utilizando um app.
Foi entendido que era necessario muita praticidade e facilidade no manuseio das amostras.
Entao concebemos um projeto que utiliza um dispositivo totalmete livre para o usario que pode ser configurado
via bluetooth. Com isso podemos facilitar o processo experimental e almentar a produtividade nesse dispositivo.


# App

O app foi feito utilizando a plataforma Mit App Inventor e utiliza a comunicação via bluetooth para troca de dados.
O aplicativo foi concebido para proporcionar ao usuario uma experiencia mais pratica para o usuário.
A interface do app tem as configurações disponiveis para que todo procedimento experimental seja realizado.
O Usuário pode setar a intensidade de rotaçåo que porcentagem e o tempo de rotação em segundos.
Foi concebida também uma tela de login para que o usuário posso se conectar com o seu dispositivo e que a senha
de acesso ao bluetooth configurada.


# Sistema Embarcado


O Sistema Embarcado do Spin Coater foi feito utilizando Eagle para fazer o circuito, está também disponível o vetor do circuito impresso
para confecção do circuito. Foram deixadas disponíveis os terminais responsáveis pela gravação do arquivo .hex no microcontrolador ATmega328au.
O sistema embarcado utiliza um módulo bluetooth HC-06.




# SpinCoaterV3 AT-AU

Nesse diretório encontra-se todos os arquivos para a confecção do hardware do spin coater. O projeto foi escrito
usando o software Eagle. A placa conta com terminais para ser instalado o firmware. Foi utilizado um módulo bluetooth 
que pode ser soldado na placa ou conectado por fios. 

Video de demontração:
https://youtu.be/IxnT_PpbAdY

O Sistema desenvolvido é OpenSource
