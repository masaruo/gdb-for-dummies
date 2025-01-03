ARG VARIANT
FROM mcr.microsoft.com/vscode/devcontainers/cpp:${VARIANT}

# CPP
RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
	&& apt-get -y install --no-install-recommends \
	build-essential \
	gdb \
	clang \
	clangd \
	clang-format \
	pkg-config \
	vim \
	&& apt-get clean \
	&& rm -rf /var/lib/apt/lists/*
