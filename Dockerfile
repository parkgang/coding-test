FROM ubuntu:latest

RUN apt-get update && \
    apt-get install -y \
        # `g++` 와 같은 C++ 컴파일러와 필요한 빌드 도구를 포함하는 패키지
        build-essential \
        # C++ 디버깅을 위함: 해당 패키지를 설치해야 C/C++ 확장에서 손쉽게 실행할 수 있도록 UI 제공
        gdb \
        # 로케일 한글로 설정을 위함
        locales \
        # Container 환경에서 학습 내용을 관리하기 위함
        git \
        # Terminal 환경에서 손쉽게 텍스트 수정을 위함
        neovim

# 로케일 한글로 설정: 하지 않으면 한글로된 디렉터리 및 한글로 된 git commit message가 깨짐
RUN locale-gen ko_KR.UTF-8
RUN update-locale LANG=ko_KR.UTF-8
ENV LANG=ko_KR.UTF-8
ENV LANGUAGE=ko_KR.UTF-8

# 컨테이너가 계속 실행되도록 설정
CMD tail -f /dev/null
