FROM ubuntu:18.04

RUN apt-get update && \
    apt-get install -y git build-essential cmake clang libssl-dev
