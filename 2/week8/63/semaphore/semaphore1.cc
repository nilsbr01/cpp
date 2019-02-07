#include "semaphore.ih"

Semaphore::Semaphore(size_t nAvailable)
:
	d_available(nAvailable)
{}