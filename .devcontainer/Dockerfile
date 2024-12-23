ARG VARIANT
FROM mcr.microsoft.com/vscode/devcontainers/cpp:${VARIANT}

# CPP
RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
	&& apt-get -y install --no-install-recommends \
	build-essential \
	cmake \
	gdb \
	googletest \
	clang \
	clangd \
	clang-format \
	pkg-config \
	&& apt-get clean \
	&& rm -rf /var/lib/apt/lists/*

# DEFAULT
RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
	&& apt-get -y install --no-install-recommends \
	valgrind \
	tree \
	lsof \
	tmux \
	curl \
	wget \
	telnet \
	&& apt-get clean \
	&& rm -rf /var/lib/apt/lists/*
