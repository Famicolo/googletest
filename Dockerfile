# Use the official Ubuntu image

FROM ubuntu:latest

# Copy the executable file and input/output files

COPY managefile /project/managefile
COPY input.txt /project/input.txt
COPY output.txt /project/output.txt

# Set the working directory

WORKDIR /project

# Launch the executable

CMD ["/project/managefile", "/project/input.txt", "/project/output.txt"]


