#include <zmq.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
	void *context=zmq_ctx_new();
	void *responder=zmq_socket(context,ZMQ_REP);
	zmq_bind(responder, "tcp://*:5555");


return 0;
}


