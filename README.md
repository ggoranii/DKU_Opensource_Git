# Git 활용 보고서

## 프로젝트 개요

**프로젝트명:** C 계산기 (Git 활용 실습)
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

```bash
git clone https://github.com/ggoranii/DKU_Opensource_Git.git
// README.md, include/calc.h, src/calc.c 생성
git add README.md include/calc.h src/calc.c
git commit -m "계산기 모듈 및 README 추가"
```

---

### 2.2 FF Merge

**시나리오:** `feature/add-utils` 브랜치에서 utils 모듈을 추가하고, main에 변경 없이 병합.

```
Before:
  main: A---B
                \
  feature:       C   (utils 모듈 추가)

After (FF merge):
  main: A---B---C
```

**실행 과정:**

```bash
// 브랜치 생성 및 전환
git checkout -b feature/add-utils

// utils 파일 추가 후 커밋
git add include/utils.h src/utils.c
git commit -m "feat: utils 모듈 추가"

// main으로 돌아와 FF merge
git checkout main
git merge feature/add-utils
```

**결과:**

```
Updating 4766a68..0ae7ec1
Fast-forward
 include/utils.h |  7 +++++++
 src/utils.c     | 24 ++++++++++++++++++++++++
 2 files changed, 31 insertions(+)
 create mode 100644 include/utils.h
 create mode 100644 src/utils.
```

**결론:** 새로운 Merge 커밋이 생성되지 않고 HEAD 포인터만 앞으로 이동합니다.
분기점 이후 main에 변경이 없을 때 발생합니다.

