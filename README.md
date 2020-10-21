# SSOO-tarea01
Tarea 1 Sistemas Operativos

Nombre: Miguel Angel Yañez Antunez
Correo: miguel.yanez@alumnos.uv.cl

Para poder mostrar el tiempo se utilizó la funcion localtime() de la librería time.h.
Al iniciar el codigo se mostrará el PID de su proceso inicial.
El codigo entra en un loop infinito en donde espera recibir señales.
Si la señal es SIGUSR1, cuyo numero de interrupción es el 10, se mostrará la hora por consola y seguirá en el loop.
Si recibe 2 señales que no sean SIGUSR1, el programa terminará.
