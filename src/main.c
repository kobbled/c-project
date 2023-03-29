#include <stdio.h>
#include <stumpless.h>
#include "libfoo.h"

int main() {
    struct stumpless_target *file_target;
    //file_target = stumpless_open_file_target( "/home/kobbled/Dropbox/Programming/C/myproject/logs/example.log" );
    file_target = stumpless_open_stdout_target("");

    stump_str( "The Bazel hello world!" );

    stumplog( LOG_INFO | LOG_USER, "The answer is %d\n", get_answer() );

    stumpless_close_file_target( file_target );
    stumpless_free_all(  );

    return 0;
}