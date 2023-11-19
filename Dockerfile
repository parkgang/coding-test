FROM ubuntu:latest

RUN apt-get update

# 유틸 패키지
RUN apt-get install -y git neovim

# 한글 로케일 생성: 하지 않으면 한글로된 디렉터리 및 한글로 된 git commit message가 깨짐
RUN apt-get install -y locales
RUN locale-gen ko_KR.UTF-8
## 시스템 기본 로케일 설정
RUN update-locale LANG=ko_KR.UTF-8

# 시간대 한국으로 설정: 하지 않으면 git commit 시간이 UTC+0로 설정되어 Github 잔디에 표시되지 않는 등 문제가 발생할 수 있음
## 설치 시 인터렉션을 요구하지 않도록
ARG DEBIAN_FRONTEND=noninteractive
RUN apt-get install -y tzdata
## 시스템 기본 시간대 설정
RUN ln -sf /usr/share/zoneinfo/Asia/Seoul /etc/localtime

# C++ 설정
RUN apt-get install -y \
        # `g++` 와 같은 C++ 컴파일러와 필요한 빌드 도구를 포함하는 패키지
        build-essential \
        # C++ 디버깅을 위함: 해당 패키지를 설치해야 C/C++ 확장에서 손쉽게 실행할 수 있도록 UI 제공
        gdb

# 컨테이너가 계속 실행되도록 설정
CMD tail -f /dev/null
