load("@rules_cc//cc:defs.bzl", "cc_test")

cc_test(
    name = "test_foo",
    srcs = ["test_foo.cc"],
    copts = ["-I lib"],
    deps = [
        "//lib:LibFoo",
        "@com_google_googletest//:gtest_main",
    ],
)