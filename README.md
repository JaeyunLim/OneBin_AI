# OneBin_AI 프로젝트

## 프로젝트 소개 (One Bin System)
- YoLo v5 기반 객체 감지 AI 모델 활용
- 실시간 쓰레기 분류 및 분리배출 시스템
- HW와 SW의 결합으로 지능형 솔루션 구현


## 프로젝트 개발 동기
- 지난 2학년 때에 객체 감지 기술을 이용한 AI 모델, YoLo v5(Your Only Look Once version5) 오픈소스를 활용하여
- 일상생활에서 분리배출을 할 때 사람들이 버리고 있는 쓰레기가 어떤 쓰레기인지 분류하는 객체 감지(Object Detection) 기술을 이용하여 실행했던 실험이며,
- 3학년에 와서 이를 보다 더 업그레이드하여 지능형 가변적인 쓰레기 분리배출 시스템(HW)까지 확장하여 SW 개발한 실험의 결과임
- 학생들이 농구하듯이 하나의 입구에 쓰레기를 투입(투구)하면서 재미를 느끼고 분리수거를 하게 되며(One Bin) 일별 등 데이터관리를 통해 쓰레기통 정보(수거,재배치 등)를 피드백 줌
- ![image](https://github.com/JaeyunLim/OneBin_AI/assets/97609649/22fe496b-b95c-4a88-a08a-508b2b347349)


## 프로젝트 진화
- 2학년
-- YoLo v5를 이용한 쓰레기 객체 감지 모델 개발
-- 일상 생활에서의 쓰레기 분류 실험
- 3학년
-- 지능형 가변적 쓰레기 분리배출 시스템으로 확장
-- HW 설계 및 SW 고도화
  

## 프로젝트 개발 초기 스케치
- 1개 입구(One Bin)→카메라 객체 판별→체인형 이동으로 3개 방향(좌,우,위)으로 분리
![image](https://github.com/JaeyunLim/OneBin_AI/assets/97609649/cc2ff161-49f1-4b47-bca9-6167712975dc)


## 프로젝트 개발 방향
- 데이터기반의 플렉서블(수용용량이 다른 쓰레기통)하고 조작가능(지역 특성에 맞게 대중소 용량을 조작)한 재활용 분리 시스템 구현
1. 일별월별 데이터 관리
2. 지역환경별 재활용쓰레기 수용 용량을 다르게 적용(대/중/소)
3. 앱에서 쉽게 쓰레기별 대중소를 변경조작 가능
4. 객체 판별을 통한 쓰레기 분리하는 일체형 시스템


## 혁신적 설계 (One Bin System, 원스톱 쓰레기 투입)
1. 플렉서블 수용 용량
- 쓰레기 종류별 가변적 용량 설정
- 지역 특성에 맞춘 대/중/소 용량 조절
2. 사용자 친화적 인터페이스
- 모바일 앱을 통한 간편한 시스템 조작 (웹 데이터 관리까지만 적용)
- 실시간 용량 조절 및 모니터링
3. 일체형 시스템
- 객체 감지부터 분리 배출까지 통합 관리
- 효율적인 공간 활용 및 운영
  

## 핵심 기능 
1. 원스톱 쓰레기 투입 (One Bin System)
- 단일 입구로 모든 쓰레기 수거
- 게임화를 통한 사용자 경험 향상
2. AI 기반 실시간 쓰레기 분류
- YoLo v5 활용 객체 감지 기술
- 정확한 쓰레기 종류 식별
3. 데이터 기반 관리 시스템
- 일별/월별 쓰레기 통계 제공
- 효율적인 수거 및 재배치 정보 제공
  
   
## 프로젝트 실행과정
1. One Bin은 금속 소재(철)의 부품들 기어들 그리고 다량의 볼트와 너트가 포함되어있는 '과학상자’와 
   다양한 모듈들(모터 및 센서들)을 작동시킬 수 있는 초소형 컴퓨터 기판인 ‘아두이노’를 활용 제작
2. 오픈소스로 GitHub에 올라온 YOLO모델과 쓰레기 데이터들을 이용해 AI모델을 학습시킴 (기 수행)
3. 기존에 학습시켜놓은 AI모델(=Yolo v5)의 파이썬 코드를 로봇에 맞게 수정하고 또 이에 맞게 아두이노를 작동시키는 C++코드를 새로 작성
   ![image](https://github.com/JaeyunLim/OneBin_AI/assets/97609649/0850759d-c70d-4fca-b3f8-dfba057a887f)
5. 기존에 존재하는 쓰레기 분리수거 로봇과 차별점을 두기위해 검출된 쓰레기에 대한 데이터관리까지 진행
   ![image](https://github.com/JaeyunLim/OneBin_AI/assets/97609649/8e46eeab-afeb-4943-b6af-79a6a9861c4f)
7. LLM을 활용해 One Bin이 만들어낸 엑셀파일 데이터에 대해 어떠한 질문이나 할 수 있는 ChatBot을 개발 (OneBin's ChatBot 구현)
    * ChatBot에 대한 접근성을 높이기 위해 웹사이트 환경에서 ChatBot을 사용할 수 있게 ‘Streamlit’이라는 파이썬 패키지를 통해 제작
   ![image](https://github.com/JaeyunLim/OneBin_AI/assets/97609649/30156ad6-5e83-47a2-a08e-a60086824865)


## 프로젝트 실행과정
1. 재활용률 향상
- 정확한 분리배출로 재활용 효율 증대
- 환경 보호 및 지속가능성 기여
2. 사용자 참여 증진
- 게임화 요소를 통한 흥미 유발
- 환경 보호 의식 고취
3. 운영 효율화
- 데이터 기반의 수거 및 관리
- 인력 및 비용 절감 효과


## 학습에 사용한 데이터들
- 현재 Trash_Detection_AI Repository 안에 [Labelling raw datas 폴더]에 존재함


## 제4회 교내 추호학술제 발표자료 (이미지 등 일부 발췌)

![image](https://github.com/JaeyunLim/OneBin_AI/assets/97609649/258b6c04-e97b-4c30-8ad7-76143a29a282)

![image](https://github.com/JaeyunLim/OneBin_AI/assets/97609649/8b4b8fa8-c9ea-47ec-a42f-4a2d4f688356)

![image](https://github.com/JaeyunLim/OneBin_AI/assets/97609649/9ae41e56-897f-40e3-8e6b-f7fd246ff2ae)

![image](https://github.com/JaeyunLim/OneBin_AI/assets/97609649/2fd8e4a2-eb6e-43fd-a752-dcd54d7c4d9a)


