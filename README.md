# Image-processing
## 색상 성분 기준으로 영상 이진화 하기

- RGB2HSV() 함수를 이용해 색상정보를 따낸다.
- RGB2Gray() 함수를 변형해서 H성분만을 이용해 기준 색상 조건에 따라 회색조 영상으로 변환한다.
- segmentation.cpp 파일에 있는 Binarization 함수 변형 

```c++

void BinarizationHue(const CByteImage& imageIn, CByteImage& imageOut, int min, int max)
{
	ASSERT(imageIn.GetChannel() == 3);

	int nWidth = imageIn.GetWidth();
	int nHeight = imageIn.GetHeight();

	for (int r = 0; r < nHeight; r++){
		BYTE* pIn = imageIn.GetPtr(r);
		BYTE* pOut = imageOut.GetPtr(r);
		int pos = 0;
		for (int c = 0; c < nWidth; c++){		
			
			if (pIn[pos + 2] >= min && pIn[pos + 2] <= max) {	// 일정 범위 안에 있는 색을 기준으로 이진화
				pOut[c] = 255;
			}
			else {
				pOut[c] = 0;
			}
			pos += 3;
		}
		
	}
}
```

