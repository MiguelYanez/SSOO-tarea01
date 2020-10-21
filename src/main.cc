#include <global.hh>
#include <unistd.h>

void signal_handler( int signal_num ){
	static uint32_t intentos = 0;
	time_t t;
	struct tm * timeinfo;
	if(signal_num == 10){
		time(&t);
        	timeinfo = localtime(&t);
		std::cout << "Señal SIGUSR1 recibida: " << asctime(timeinfo);
		std::cout << "Listo para recibir la señal SIGUSR1.\n";
	}else intentos++;
	if(intentos == 2){
		exit(signal_num);
	}
}
int main(int argc, char* argv[]){
	std::cout << "Programa hora ejecutandose. PID=" << getpid() << ".\n";
	std::cout << "Listo para recibir la señal SIGUSR1.\n";
	std::signal(SIGUSR1, signal_handler);
	std::signal(SIGINT, signal_handler);
	while(true) {
	}
	return EXIT_SUCCESS;
}
