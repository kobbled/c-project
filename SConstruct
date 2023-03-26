# SConstruct

env = Environment(CPPPATH=['lib'])

# Add libfoo as a library
libfoo = env.Library('libfoo', ['lib/libfoo.c'])

env.Program('myprogram', ['src/main.c'],
            LIBS=[libfoo])

SConscript('tests/SConstruct', exports=['env', 'libfoo'])