#pragma once
#include "stdafx.h"

enum Element {
	TITLE,
	GENRE,
	SINGER,
};

class MusicInfo
{
public:
	string title;
	string genre;
	string singer;
	string releaseDate;
	string playing;

public:
	MusicInfo();
	/*MusicInfo(string title, string genre, string singer);*/
	~MusicInfo() {};

	/*void setTitle(string title);
	void setGenre(string genre);
	void setSinger(string singer);
	
	void setPlaying();*/

	string getTitle();
	string getSinger();
	string getGenre();
	string getRalease();
	string getPlaying();

	void Play();
	void Display();
};

