# Git 활용 보고서

## 프로젝트 개요

**프로젝트명:** C 게산기 (Git 활용 실습)
**언어:** C
**저장소:** https://github.com/ggoranii/DKU_Opensource_Git.git

### 프로젝트 구조

```
DKU_Opensource_Git/
├── src/                # C 소스 파일
│   ├── main.c          - 프로그램 진입점
│   ├── calc.c    - 사칙연산 구현
│   └── utils.c         - 유틸리티 함수
├── include/            # 헤더 파일
│   ├── calc.h
│   └── utils.h
├── docs/               # 문서
│   ├── commands.md     - Git 명령어 정리
│   └── git_report.md   - 본 보고서
└── README.md
```

---

## 2. Git 작업 내역

### 2.1 초기 설정 및 첫 커밋

Github를 로컬에 클론 후 프로젝트 기본 구조 생성하여 첫 커밋을 수행했습니다.

...bash
git clone https://github.com/ggoranii/DKU_Opensource_Git.git
// README.md, include/calc.h, src/calc.c 생성
git add README.md include/calc.h src/calc.c
git commit -m "계산기 모듈 및 README 추가"
```

---

