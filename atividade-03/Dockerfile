FROM fedora:latest
RUN dnf -y update && dnf -y install gcc fish && dnf clean all
WORKDIR /app
CMD ["fish"]
