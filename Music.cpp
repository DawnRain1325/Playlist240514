#include "Music.h"
#include "stdafx.h"

MusicInfo::MusicInfo() :title("unknown"), genre("x"), singer("unknown"),releaseDate(""), playing("no data")
{
}

//MusicInfo::MusicInfo(string title, string genre, string singer):title(title), genre(genre), singer(singer)
//{
//	playing = "now playing " + singer + "-" + title;
//}

//void MusicInfo::Title(string title)
//{
//	this->title = title;
//}
//
//void MusicInfo::Genre(string genre)
//{
//	this->genre = genre;
//}
//
//void MusicInfo::Singer(string singer)
//{
//	this->singer = singer;
//}
//
//void MusicInfo::setPlaying()
//{
//	playing = "now playing " + singer + "-" + title;
//}
//
string MusicInfo::getTitle()
{
	return title;
}

string MusicInfo::getSinger()
{
	return singer;
}

string MusicInfo::getGenre()
{
	return genre;
}

string MusicInfo::getRalease()
{
	return string();
}

string MusicInfo::getPlaying()
{
	return string();
}

//void MusicInfo::Play()
//{
//	cout << playing << endl;
//}

void MusicInfo::Play()
{
}

void MusicInfo::Display()
{
	cout << title << "\t\t" <<singer <<"\t\t" << genre << "\t\t" << releaseDate <<"\t\t" << endl;
}

