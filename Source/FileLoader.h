#pragma once

class IFileManager
{
public:
	bool ImportFile_STL(std::string filePath, std::vector<VECTOR3>& refVertexBuffer, std::vector<UINT>& refIndexBuffer, std::vector<VECTOR3>& refNormalBuffer, std::string & refFileInfo);

	bool IFileManager::ImportFile_OBJ(std::string pFilePath, std::vector<Vertex>& refVertexBuffer, std::vector<UINT>& refIndexBuffer);

	bool ImportFile_PPM(std::string filePath, UINT& outWidth,UINT& outHeight,std::vector<COLOR3>& outColorBuffer);

	bool ExportFile_PPM(std::string filePath,UINT width,UINT height,const std::vector<COLOR3>& colorBuffer, bool bOverrideExistedFile);

private:
	bool mFunction_ImportFile_STL_Binary(std::string filePath, std::vector<VECTOR3>& refVertexBuffer, std::vector<UINT>& refIndexBuffer, std::vector<VECTOR3>& refNormalBuffer, std::string& refFileInfo);

	bool mFunction_ImportFile_STL_Ascii(std::string pFilePath, std::vector<VECTOR3>& refVertexBuffer, std::vector<UINT>& refIndexBuffer, std::vector<VECTOR3>& refNormalBuffer, std::string& refFileInfo);

};