# 概要

UE4でMetaHumanのLipSyncを試す用のサンプルレポジトリです。
<br>
(容量の大きいファイルがあるためpullする際はGit LFSが必要です)

## 使用要素
- UE4
- VaRest
- Runtime Audio Importer
- OVR LipSync
- MetaHuman Creator

## 外部API
外部APIの仕様については以下の解説記事にまとめていただきました。
<br>
[【UE4】俺、AIになる](https://qiita.com/Miyayan/items/a038bd4bd0384fdd334c#azure-text-to-speech)

## 環境変数
ビルド時にシステム環境変数を読み込むようにしているため、以下のシステム環境変数の設定が必要です。

| 環境変数名  | 値 |
| ------------- | ------------- |
| TEXT_TO_SPEECH_URL  | {外部APIのURL・パス} |

<br>

## 参考にさせていただいたURL
- [VaRest](https://github.com/ufna/VaRest)
- [Runtime Audio Importer](https://github.com/gtreshchev/RuntimeAudioImporter)
- [MetaHuman公式](https://www.unrealengine.com/ja/metahuman)
- [OVR Lipsync公式](https://developer.oculus.com/documentation/unreal/audio-ovrlipsync-unreal/?locale=ja_JP)
- [Oculus社のリップシンクライブラリ「Oculus LipSync ( OVRLipSync )」をUE4で使う方法について その1 (サンプル解説編)](https://pafuhana1213.hatenablog.com/entry/2018/11/17/002935)
- [Tutorial Part 2: Lip sync, text to speech and Unreal Engine | Prototype | OVR Oculus & Replica |](https://www.youtube.com/watch?v=SBMzammddHw)
- [UE4OVRLipSyncCookFrameSequence - GitHub](https://github.com/IlgarLunin/UE4OVRLipSyncCookFrameSequence)
