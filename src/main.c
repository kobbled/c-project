#include <stdio.h>
#include <stumpless.h>
#include "libfoo.h"

int main() {
    struct stumpless_target *file_target;
    // Log to a file
    //file_target = stumpless_open_file_target( "/home/kobbled/Dropbox/Programming/C/myproject/logs/example.log" );
    // Log to stdout
    file_target = stumpless_open_stdout_target("");

    //set logging level
    //stumplog_set_mask( LOG_UPTO( LOG_INFO ) );

    stump_str( "The Bazel hello world!" );

    stumplog( LOG_INFO | LOG_USER, "The answer is %d\n", get_answer() );

    stump_i( "this gets logged as an info message" );
    stump_t( "this is easy to trace to the source" );
    stump_d( "DEBUG info: %d, %d, %s", 10, 5, "YO!" );

    stumpless_close_file_target( file_target );
    stumpless_free_all(  );

    return 0;
}