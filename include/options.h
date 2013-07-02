/**
 * options.h
 *
 * Toke Høiland-Jørgensen
 * 2013-06-04
 */

#ifndef OPTIONS_H
#define OPTIONS_H

#include <sys/time.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>


struct options {
	char initialised;
	char poisson;
	int run_length;
	int rate; // stored in bytes/sec, user inputs bits/sec
	struct timeval start_time;
	FILE *output;
	struct addrinfo *dest;
	int socket;
};

int initialise_options(struct options *opt, int argc, char **argv);
void destroy_options(struct options *opt);

#endif
