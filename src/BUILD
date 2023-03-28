load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "myproject",
    srcs = ["main.c"],
    deps = ["//lib:LibFoo"],
    copts = ["-I lib"],
)