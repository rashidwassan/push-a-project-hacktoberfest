from django.conf.urls import url
from ydownloader import views

urlpatterns = [
	url(r'^home/$',views.greetings),
    url(r'^home/download/$',views.download),
    url(r'home/downloading/$',views.downloading),
]
