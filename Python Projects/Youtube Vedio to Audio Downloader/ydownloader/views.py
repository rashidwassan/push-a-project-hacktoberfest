from django.shortcuts import render
from django.http import HttpResponse
from pytube import YouTube

# Create your views here.
def greetings(request):
	res = render(request,'ydownloader/home.html')
	return res

def download(request):
    if request.method == 'POST':
        video_url=request.POST['video_url']
        # video_url = 'https://www.youtube.com/watch?v=LIlmQ8xhRRI'
        yt = YouTube(video_url)
        thumbnail_url = yt.thumbnail_url
        title = yt.title
        length = yt.length
        desc = yt.description
        view = yt.views
        rating = yt.rating
        age_restricted = yt.age_restricted
        res = render(request,'ydownloader/home.html',{"title":title,"thumbnail_url":thumbnail_url,"video_url":video_url})
        return res
    else:
        res = render(request,'ydownloader/home.html')
        return res

def downloading(request):
	if request.method == 'POST':
		formatRadio = request.POST['formatRadio']
		if formatRadio != "audio":
			qualityRadio = request.POST['qualityRadio']
		video_url_d = request.POST['video_url_d']
		print(formatRadio)
		# print(qualityRadio)
		yt = YouTube(video_url_d)
		print(yt)
		print("Downloading start ....")
		if formatRadio == "audio":
			yt.streams.filter(type = formatRadio).last().download()
		else:
			yt.streams.filter(type = formatRadio,resolution=qualityRadio).first().download()
		print("Downloding completed")
	res = render(request,'ydownloader/home.html',{"msg":"downloading completed"})
	return res
