#include <stdio.h>
#include "tests/threads/tests.h"
#include "threads/malloc.h"
#include "threads/synch.h"
#include "threads/thread.h"
#include "devices/timer.h"

void
test_timer_sleep (void)
{
  printf("Putting Thread to Sleep @ %lld\n", timer_ticks() );
  timer_sleep (1000);
  printf("Waking Thread up @ %lld", timer_ticks() );
  pass ();
}
