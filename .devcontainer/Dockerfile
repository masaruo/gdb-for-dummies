ARG VARIANT
FROM mcr.microsoft.com/vscode/devcontainers/cpp:${VARIANT}

ARG DEBIAN_FRONTEND=noninteractive
# CPP
RUN apt-get update && apt-get -y install --no-install-recommends \
	build-essential \
	gdb \
	valgrind \
	clang \
	clangd \
	clang-format \
	&& apt-get clean \
	&& rm -rf /var/lib/apt/lists/*
