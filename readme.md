## Usage

Compile project with

```
 bazel run src:myproject
```

Just compile and run tests with

```
bazel test --test_output=all tests/test_foo
```

## Todo

- [x] Use `<gtest/gtest.h>` for unit tests instead